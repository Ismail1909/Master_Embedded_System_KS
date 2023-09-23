/******************************************************************************
 *
 * Unit: 3 Embedded C
 *
 * Lesson: 1
 *
 * File Name: Platform_Types.h
 *
 * Description: Platform Types Header for STM32F103C6TX
 *
 * Author: Ismail Amr
 ******************************************************************************/

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_


/* Data Type Definitions */


typedef _Bool boolean;
typedef signed char   sint8_t;
typedef unsigned char uint8_t;

typedef signed short   sint16;
typedef unsigned short uint16;

typedef signed int   sint32;
typedef unsigned int uint32;
typedef signed long long int   sint64;
typedef unsigned long long int uint64;

typedef float  float32;
typedef double float64;

/* Volatile Data Type Definitions */

typedef volatile signed char vsint8_t;
typedef volatile unsigned char vuint8_t;

typedef volatile signed short vsint16_t;
typedef volatile unsigned short vuint16_t;

typedef volatile signed int vsint32_t;
typedef volatile unsigned int vuint32_t;

typedef volatile signed long long int vsint64_t;
typedef volatile unsigned long long int vuint64_t;







#endif /* PLATFORM_TYPES_H_ */
