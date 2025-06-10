#include <nav_msgs/msg/odometry.hpp>
#include <rclcpp/rclcpp.hpp>

class OdomPublisherSubscriber : public rclcpp::Node
{
public:
    OdomPublisherSubscriber() : Node("odom_publisher_subscriber")
    {
        // 队列深度为 10
        rclcpp::QoS qos_profile(10); 
        // 可靠性策略
        qos_profile.reliability(RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT);
        // 持久性策略
        qos_profile.durability(RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL);
        // 历史记录策略
        qos_profile.history(RMW_QOS_POLICY_HISTORY_KEEP_LAST);
        // 截止时间为 1秒
        qos_profile.deadline(rclcpp::Duration(1, 0));

        odom_publisher_ = this->create_publisher<nav_msgs::msg::Odometry>(
            "odom", qos_profile
        );

        odom_subscription_ = this->create_subscription<nav_msgs::msg::Odometry>(
            "odom", rclcpp::SensorDataQoS(),
            [this](const nav_msgs::msg::Odometry::SharedPtr msg)
            {
                (void)msg;
                RCLCPP_INFO(this->get_logger(), "收到里程计消息");
            }
        );

        // 创建一个 1秒 的定时器。并指定回调函数
        timer_ = this->create_wall_timer(std::chrono::seconds(1), 
        [this]()
        {
            odom_publisher_->publish(nav_msgs::msg::Odometry());
        });
    }

private:
    rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odom_publisher_;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_subscription_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto odom_node = std::make_shared<OdomPublisherSubscriber>();
    rclcpp::spin(odom_node);
    rclcpp::shutdown();
    return 0;
}