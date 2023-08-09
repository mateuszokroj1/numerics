#pragma once

typedef struct
{
  float e;
  float i;
  float j;
  float k;
} quaternionf;

typedef struct
{
  double e;
  double i;
  double j;
  double k;
} quaterniond;

quaternionf prim_quaternionf_add(quaternionf a, quaternionf b);
quaterniond prim_quaterniond_add(quaterniond a, quaterniond b);

quaternionf prim_quaternionf_sub(quaternionf a, quaternionf b);
quaterniond prim_quaterniond_sub(quaterniond a, quaterniond b);

quaternionf prim_quaternionf_mul(quaternionf a, quaternionf b);
quaterniond prim_quaterniond_mul(quaterniond a, quaterniond b);