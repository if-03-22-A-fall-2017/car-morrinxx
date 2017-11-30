/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			Car
 * Author:			P. Bauer
 * Due Date:		January 9, 2015
 * ----------------------------------------------------------
 * Description:
 * Car demo project.
 * ----------------------------------------------------------
 */
#include <stdio.h>
#include <string.h>

#include "car.h"

#include "shortcut.h"
#include "test_car.h"

int main(int argc, char *argv[])
{
	ADD_TEST(get_first_aixam);

	ADD_TEST(get_first_multipla);
	ADD_TEST(get_second_multipla);
	ADD_TEST(get_third_multipla);

	ADD_TEST(get_first_jeep);
	ADD_TEST(get_second_jeep);

	ADD_TEST(get_car_fails);
	ADD_TEST(init);
	ADD_TEST(init_resets_acceleration_rate);

	ADD_TEST(acceleration_rate);
	ADD_TEST(too_high_acceleration_rate_for_aixam);
	ADD_TEST(too_high_acceleration_rate_for_multipla);
	ADD_TEST(too_high_acceleration_rate_for_jeep);
	ADD_TEST(too_low_acceleration_rate_for_all_car_types);

	ADD_TEST(accelerate);
	ADD_TEST(init_resets_speed);
	ADD_TEST(accelerate_aixam_to_max_speed);
	ADD_TEST(accelerate_multipla_to_max_speed);
	ADD_TEST(accelerate_jeep_to_max_speed);

	run_tests();
	return 0;
}
