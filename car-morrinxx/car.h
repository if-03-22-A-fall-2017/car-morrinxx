/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: <your class>
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			car.h
* Author:			P. Bauer
* Due Date:		January 9, 2015
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H

enum type{AIXAM, FIAT_MULTIPLA, JEEP};
enum color{RED, GREEN, BLUE, ORANGE, SILVER, BLACK};

typedef struct CarType* Car;

void init();
int get_speed(Car car);
double get_fill_level(Car car);
Car get_car(type car_type);
enum type get_type(Car car);
enum color get_color(Car car);
double get_acceleration_rate(Car car);
void set_acceleration_rate(Car car, double rate);
void accelerate(Car car);
int round(double speed);

int get_speed(Car car);




/*enum CarType{AIXAM, FIAT_MULTIPLA, JEEP};
enum Color{RED, BLUE, GREEN, ORANGE, SILVER, BLACK};

struct Car{
  enum CarType;
  enum Color;
  unsigned double fill_level;

}
Car get_car(enum car_type);
CarType get_type(Car car);
Color get_color(Car car);
double get_fill_level(Car car);
*/


#endif
