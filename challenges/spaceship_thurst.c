#include <stdio.h>
#include <stdlib.h>

typedef enum  {
    THRUST_NONE,
    THRUST_LOW = 5,
    THRUST_MEDIUM = 9,
    THRUST_HIGH = 12,
    THRUST_MAXIMUM = 20,
} SpaceshipThrust;

int main()
{
    SpaceshipThrust thrust;
    thrust = THRUST_NONE;
    printf("Ready to go level %d\n", thrust);

    thrust = THRUST_LOW;
    printf("Traveling deep into space %d\n", thrust);

    thrust = THRUST_MEDIUM;
    printf("Entering into Ionosphere %d\n", thrust);

    thrust = THRUST_HIGH;
    printf("Acceleration level %d\n", thrust);

    thrust = THRUST_MAXIMUM;
    printf("Take off level %d\n", thrust);
}