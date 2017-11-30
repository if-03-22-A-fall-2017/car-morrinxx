/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			test_car.cpp
 * Author:			P. Bauer
 * Due Date:		January 9, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for Car.
 * ----------------------------------------------------------
 */
#include <stdio.h>
#include <string.h>

#include "shortcut.h"
#include "car.h"
#include "test_car.h"

/**
* get_first_aixam tests the properties of the first aixam in the car park
*/
TEST(get_first_aixam)
{
	Car car1 = get_car(AIXAM);
	ASSERT_FALSE(car1 == 0, "Must get the first Axiam");
	ASSERT_EQUALS(AIXAM, get_type(car1));
	ASSERT_EQUALS(RED, get_color(car1));
	ASSERT_EQUALS(16.0, get_fill_level(car1));
	ASSERT_EQUALS(0.0, get_acceleration_rate(car1));
	ASSERT_EQUALS(0, get_speed(car1));
}

/**
* your description:
*/
TEST(get_first_multipla)
{
	Car car1 = get_car(FIAT_MULTIPLA);
	ASSERT_FALSE(car1 == 0, "Must get the first Multipla");
	ASSERT_EQUALS(FIAT_MULTIPLA, get_type(car1));
	ASSERT_EQUALS(GREEN, get_color(car1));
	ASSERT_EQUALS(65.0, get_fill_level(car1));
	ASSERT_EQUALS(0.0, get_acceleration_rate(car1));
	ASSERT_EQUALS(0, get_speed(car1));
}

/**
* your description:
*/
TEST(get_second_multipla)
{
	Car car1 = get_car(FIAT_MULTIPLA);
	ASSERT_FALSE(car1 == 0, "Must get the second Multipla");
	ASSERT_EQUALS(FIAT_MULTIPLA, get_type(car1));
	ASSERT_EQUALS(BLUE, get_color(car1));
	ASSERT_EQUALS(65.0, get_fill_level(car1));
	ASSERT_EQUALS(0.0, get_acceleration_rate(car1));
	ASSERT_EQUALS(0, get_speed(car1));
}

/**
* your description:
*/
TEST(get_third_multipla)
{
	Car car1 = get_car(FIAT_MULTIPLA);
	ASSERT_FALSE(car1 == 0, "Must get the third Multipla");
	ASSERT_EQUALS(FIAT_MULTIPLA, get_type(car1));
	ASSERT_EQUALS(ORANGE, get_color(car1));
	ASSERT_EQUALS(65.0, get_fill_level(car1));
	ASSERT_EQUALS(0.0, get_acceleration_rate(car1));
	ASSERT_EQUALS(0, get_speed(car1));
}

/**
* your description:
*/
TEST(get_first_jeep)
{
	Car car1 = get_car(JEEP);
	ASSERT_FALSE(car1 == 0, "Must get the first Jeep");
	ASSERT_EQUALS(JEEP, get_type(car1));
	ASSERT_EQUALS(SILVER, get_color(car1));
	ASSERT_EQUALS(80.0, get_fill_level(car1));
	ASSERT_EQUALS(0.0, get_acceleration_rate(car1));
	ASSERT_EQUALS(0, get_speed(car1));
}

/**
* your description:
*/
TEST(get_second_jeep)
{
	Car car1 = get_car(JEEP);
	ASSERT_FALSE(car1 == 0, "Must get the second Jeep");
	ASSERT_EQUALS(JEEP, get_type(car1));
	ASSERT_EQUALS(BLACK, get_color(car1));
	ASSERT_EQUALS(80.0, get_fill_level(car1));
	ASSERT_EQUALS(0.0, get_acceleration_rate(car1));
	ASSERT_EQUALS(0, get_speed(car1));
}

/**
* your description:
*/
TEST(get_car_fails)
{
	ASSERT_TRUE(get_car(AIXAM) == 0, "No second axiam available");
	ASSERT_TRUE(get_car(FIAT_MULTIPLA) == 0, "No fourth Multi available");
	ASSERT_TRUE(get_car(JEEP) == 0, "No third jeep available");
}

/**
* Tests whether init sets all cars in car park back to be
* available.
*/
TEST(init) {
	init();
	ASSERT_TRUE(get_car(AIXAM) != 0, "One Axiam available");
	ASSERT_TRUE(get_car(AIXAM) == 0, "Only one Axiam available");
	ASSERT_TRUE(get_car(FIAT_MULTIPLA) != 0, "First Multi available");
	ASSERT_TRUE(get_car(FIAT_MULTIPLA) != 0, "Second Multi available");
	ASSERT_TRUE(get_car(FIAT_MULTIPLA) != 0, "Third Multi available");
	ASSERT_TRUE(get_car(FIAT_MULTIPLA) == 0, "Only three Multis available");
	ASSERT_TRUE(get_car(JEEP) != 0, "First Jeep available");
	ASSERT_TRUE(get_car(JEEP) != 0, "Second Jeep available");
	ASSERT_TRUE(get_car(JEEP) == 0, "Only two Jeeps available");
}

/**
* your description:
*/
TEST(init_resets_acceleration_rate)
{
	init();
	Car car = get_car(AIXAM);
	ASSERT_EQUALS(0, get_acceleration_rate(car));
	set_acceleration_rate(car, 1);
	ASSERT_EQUALS(1, get_acceleration_rate(car));
	init();
	ASSERT_EQUALS(0, get_acceleration_rate(get_car(AIXAM)));
}

/**
* your description:
*/
TEST(acceleration_rate)
{
	init();
	Car car = get_car(JEEP);
	set_acceleration_rate(car, 3.14);
	ASSERT_EQUALS_TOLERANCE(3.14, get_acceleration_rate(car), 0.1);
}

/**
* your description:
*/
TEST(too_high_acceleration_rate_for_aixam)
{
	init();
	Car car = get_car(AIXAM);
	set_acceleration_rate(car, 1.01);
	ASSERT_EQUALS_TOLERANCE(1.0, get_acceleration_rate(car), 0.00001);
}

/**
* your description:
*/
TEST(too_high_acceleration_rate_for_multipla)
{
	init();
	Car car = get_car(FIAT_MULTIPLA);
	set_acceleration_rate(car, 2.27);
	ASSERT_EQUALS_TOLERANCE(2.26, get_acceleration_rate(car), 0.00001);
}

/**
* your description:
*/
TEST(too_high_acceleration_rate_for_jeep)
{
	init();
	Car car = get_car(JEEP);
	set_acceleration_rate(car, 3.15);
	ASSERT_EQUALS_TOLERANCE(3.14, get_acceleration_rate(car), 0.00001);
}

/**
* your description:
*/
TEST(too_low_acceleration_rate_for_all_car_types)
{
	init();
	Car aixam = get_car(AIXAM);
	set_acceleration_rate(aixam, -8.0);
	ASSERT_EQUALS_TOLERANCE(-8.0, get_acceleration_rate(aixam), 0.001);

	set_acceleration_rate(aixam, -8.01);
	ASSERT_EQUALS_TOLERANCE(-8.0, get_acceleration_rate(aixam), 0.001);
}

/******************************************************************************
 * test_accelerate
 *
 * tests acceleration of car without any limits.
 ******************************************************************************/
TEST(accelerate)
{
	init();
	Car car = get_car(AIXAM);
	ASSERT_EQUALS(0, get_speed(car));
	set_acceleration_rate(car, 1.0);
	accelerate(car);
	ASSERT_EQUALS(4, get_speed(car));
}

/**
* your description:
*/
TEST(init_resets_speed)
{
	init();
	Car car = get_car(AIXAM);
	ASSERT_EQUALS(0, get_speed(car));
	set_acceleration_rate(car, 0.5);
	accelerate(car);
	ASSERT_EQUALS(2, get_speed(car));
	init();
	ASSERT_EQUALS(0, get_speed(get_car(AIXAM)));
}

/**
* your description:
*/
TEST(accelerate_aixam_to_max_speed)
{
	init();
	Car car = get_car(AIXAM);
	ASSERT_EQUALS(0, get_speed(car));
	set_acceleration_rate(car, 1);
	for (int i = 0; i < 12; i++)
		accelerate(car);
	ASSERT_EQUALS(43, get_speed(car));
	accelerate(car);
	ASSERT_EQUALS(45, get_speed(car));
}

/**
* your description:
*/
TEST(accelerate_multipla_to_max_speed)
{
	init();
	Car car = get_car(FIAT_MULTIPLA);
	ASSERT_EQUALS(0, get_speed(car));
	set_acceleration_rate(car, 2.26);
	for (int i = 0; i < 20; i++)
		accelerate(car);
	ASSERT_EQUALS(163, get_speed(car));
	accelerate(car);
	ASSERT_EQUALS(170, get_speed(car));
	}

/**
* your description:
*/
TEST(accelerate_jeep_to_max_speed)
{
	init();
	Car car = get_car(JEEP);
	ASSERT_EQUALS(0, get_speed(car));
	set_acceleration_rate(car, 3.14);
	for (int i = 0; i < 17; i++)
		accelerate(car);
	ASSERT_EQUALS(192, get_speed(car));
	accelerate(car);
	ASSERT_EQUALS(196, get_speed(car));
}
