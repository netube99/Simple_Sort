/**
 * \file simple_sort.h
 * \brief 简易排序算法
 * \details 提供了冒泡和选择两种排序算法
 * \author netube_99\netube@163.com
 * \date 2021.05.05
 * \version v1.0.0
 * 
 * 2021.05.05 v1.0.0 第一版本
*/

#ifndef _SIMPLE_SORT_H_
#define _SIMPLE_SORT_H_

#include <stdint.h>

void Sort_Bubble_32     (int32_t *list, uint32_t lenght, uint8_t dir);//冒泡排序
void Sort_Selection_32  (int32_t *list, uint32_t lenght, uint8_t dir);//选择排序
#endif