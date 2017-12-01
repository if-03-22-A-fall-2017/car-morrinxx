#include <stdio.h>
#include "car.h"

#define AIXAM_MAX_ACCELERATION 1.0
#define FIAT_MULTIPLA_MAX_ACCELERATION 2.26
#define JEEP_MAX_ACCELERATION 3.14

#define AIXAM_MAX_SPEED 45
#define FIAT_MULTIPLA_MAX_SPEED 170
#define JEEP_MAX_SPEED 196

#define MAX_DECCELERATION -8


struct CarType{
  enum type type;
  enum color color;
  double fill_level;
  double speed;
  double acceleration_rate;

};

int count = 0;
static CarType aixam = {AIXAM, RED, 16.0, 0, 0.0};
static CarType multi1 = {FIAT_MULTIPLA,GREEN, 65.0, 0, 0.0};
static CarType multi2 = {FIAT_MULTIPLA,BLUE, 65, 0, 0.0};
static CarType multi3 = {FIAT_MULTIPLA,ORANGE, 65.0, 0, 0.0};
static CarType jeep1 = {JEEP, SILVER, 80.0, 0, 0.0};
static CarType jeep2 ={JEEP, BLACK, 80.0, 0, 0.0};

struct RentalRecord {
  bool isRented;
  Car car;
};

static RentalRecord rental_record[] = {
  {false, &aixam}, {false, &multi1},  {false, &multi2},  {false, &multi3},  {false, &jeep1},  {false, &jeep2}
};


void init()
{
  aixam.fill_level = 16.0;
  aixam.speed = 0;
  aixam.acceleration_rate = 0.0;
  rental_record[0].isRented = false;

  multi1.fill_level = 65.0;
  multi1.speed = 0;
  multi1.acceleration_rate = 0.0;
  rental_record[1].isRented = false;

  multi2.fill_level = 65.0;
  multi2.speed = 0;
  multi2.acceleration_rate = 0.0;
  rental_record[2].isRented = false;

  multi3.fill_level = 65.0;
  multi3.speed = 0;
  multi3.acceleration_rate = 0.0;
  rental_record[3].isRented = false;

  jeep1.fill_level = 80.0;
  jeep1.speed = 0;
  jeep1.acceleration_rate = 0.0;
  rental_record[4].isRented = false;

  jeep2.fill_level = 80.0;
  jeep2.speed = 0;
  jeep2.acceleration_rate = 0.0;
  rental_record[5].isRented = false;
}

int get_speed(Car car){
  int speed = round(car->speed);
  return speed;
}
double get_fill_level(Car car){
  return car->fill_level;
}

Car get_car(type car_type){
  for (int i = 0; i < 6; i++) {
    if (!rental_record[i].isRented && rental_record[i].car->type == car_type) {
      rental_record[i].isRented = true;
      return rental_record[i].car;

    }
  }
  return 0;
}
enum type get_type(Car car){
  return car->type;
}
enum color get_color(Car car){
  return car->color;

}
double get_acceleration_rate(Car car){
  return car->acceleration_rate;
}

void set_acceleration_rate(Car car, double rate)
{
  if(rate < MAX_DECCELERATION){
    car->acceleration_rate = MAX_DECCELERATION;
    return;
  }

  if (car->type == AIXAM) {
    if (rate > AIXAM_MAX_ACCELERATION) {
      car->acceleration_rate = AIXAM_MAX_ACCELERATION;
    }
    else car->acceleration_rate = rate;
  }

  if (car->type == FIAT_MULTIPLA) {
    if (rate > FIAT_MULTIPLA_MAX_ACCELERATION) {
      car->acceleration_rate = FIAT_MULTIPLA_MAX_ACCELERATION;
    }
    else car->acceleration_rate = rate;
  }

  if (car->type == JEEP) {
    if (rate > JEEP_MAX_ACCELERATION) {
      car->acceleration_rate = JEEP_MAX_ACCELERATION;
    }
    else car->acceleration_rate = rate;
  }
}
void accelerate(Car car)
{
  car->speed = car->acceleration_rate * 3.6 + car->speed;
  if(car->type == AIXAM){
    if(car->speed > AIXAM_MAX_SPEED){
      car->speed = AIXAM_MAX_SPEED;
    }
  }
  if(car->type == FIAT_MULTIPLA){
    if(car->speed > FIAT_MULTIPLA_MAX_SPEED){
      car->speed = FIAT_MULTIPLA_MAX_SPEED;
    }
  }
  if(car->type == JEEP){
    if(car->speed > JEEP_MAX_SPEED){
      car->speed = JEEP_MAX_SPEED;
    }
  }


}

int round(double speed){
  int rounded = (speed + 0.5);
  return rounded;
}
