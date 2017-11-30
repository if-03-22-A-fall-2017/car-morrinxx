/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			test_car.h
 * Author:			P. Bauer
 * Due Date:		January 9, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for car.
 * ----------------------------------------------------------
 */
#ifndef ___TEST_CAR_H
#define ___TEST_CAR_H

#include "shortcut.h"

TEST(get_first_aixam);
TEST(get_first_multipla);
TEST(get_second_multipla);
TEST(get_third_multipla);
TEST(get_first_jeep);
TEST(get_second_jeep);

TEST(init);
TEST(init_resets_acceleration_rate);
TEST(get_car_fails);

TEST(acceleration_rate);
TEST(too_high_acceleration_rate_for_aixam);
TEST(too_high_acceleration_rate_for_multipla);
TEST(too_high_acceleration_rate_for_jeep);
TEST(too_low_acceleration_rate_for_all_car_types);

TEST(accelerate);
TEST(init_resets_speed);
TEST(accelerate_aixam_to_max_speed);
TEST(accelerate_multipla_to_max_speed);
TEST(accelerate_jeep_to_max_speed);
#endif
