#include <stdio.h>

int main() {
    // Define enumeration for traffic lights
    enum TrafficLight {RED, YELLOW, GREEN};

    // Example usage: change the light here
    enum TrafficLight light;

    printf("Enter traffic light color (0-RED, 1-YELLOW, 2-GREEN): ");
    scanf("%d", &light);

    // Print action based on the enum value
    switch(light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light value!\n");
    }

    return 0;
}