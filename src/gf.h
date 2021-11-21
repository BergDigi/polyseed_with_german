/* Copyright (c) 2020-2021 tevador <tevador@gmail.com> */
/* See LICENSE for licensing information */

#ifndef GF_H
#define GF_H

#include "polyseed.h"

#include <stdint.h>

#define GF_BITS 11
#define GF_SIZE (1u << GF_BITS)
#define GF_MASK (GF_SIZE - 1)
#define POLY_MAX_DEGREE 15

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

typedef uint_least16_t gf_storage;
typedef uint_fast16_t gf_elem;

typedef struct gf_poly {
    gf_elem coeff[POLY_MAX_DEGREE + 1];
    unsigned degree;
} gf_poly;

POLYSEED_PRIVATE
void polyseed_data_to_poly(const polyseed_data* data, gf_poly* poly);

POLYSEED_PRIVATE
void polyseed_poly_to_data(const gf_poly* poly, polyseed_data* data);

#endif
