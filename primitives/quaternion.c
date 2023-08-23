#include "prim_quaternion.h"



quaternionf prim_quaternionf_add(quaternionf a, quaternionf b)
{
  quaternionf result;

  result._intrin = _mm_add_ps(a._intrin, b._intrin);

  return result;
}

quaterniond prim_quaterniond_add(quaterniond a, quaterniond b)
{
  quaterniond result;

  result._intrin = _mm256_add_pd(a._intrin, b._intrin);

  return result;
}

quaternionf prim_quaternionf_sub(quaternionf a, quaternionf b)
{
  quaternionf result;

  result._intrin = _mm_sub_ps(a._intrin, b._intrin);

  return result;
}

quaterniond prim_quaterniond_sub(quaterniond a, quaterniond b)
{
  quaterniond result;

  result._intrin = _mm256_sub_pd(a._intrin, b._intrin);

  return result;
}

quaternionf prim_quaternionf_mul(quaternionf a, quaternionf b)
{
  quaternionf result;

  result._intrin = _mm_mul_ps(a._intrin, b._intrin);

  return result;
}

quaterniond prim_quaterniond_mul(quaterniond a, quaterniond b)
{
  quaterniond result;

  result._intrin = _mm256_mul_pd(a._intrin, b._intrin);

  return result;
}