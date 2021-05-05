/**
 * \file simple_sort.c
 * \brief 简易排序算法
 * \details 提供了冒泡和选择两种排序算法
 * \author netube_99\netube@163.com
 * \date 2021.05.05
 * \version v1.0.0
 * 
 * 2021.05.05 v1.0.0 第一版本
*/

#include "simple_sort.h"

/**
 * \brief 冒泡排序（int32）
 * \param[out] list: 待排序数组
 * \param[in] lenght: 数组元素个数
 * \param[in] dir: 排序方向
 *              0：升序
 *              1：降序
*/
void Sort_Bubble_32(int32_t *list, uint32_t lenght, uint8_t dir)
{
    if(dir != 0)//从大到小
    {
        for (uint32_t i = 0; i < lenght - 1; i++)
        {
            uint8_t sort_finish = 1 ;//排序完成标志位
            for (uint32_t j = 0; j < lenght - i - 1; j++)
            {
                if(list[j] < list[j+1])
                {
                    int32_t swap = list[j];
                    list[j] = list[j+1];
                    list[j+1] = swap;
                    sort_finish = 0 ;//置零表示数据可能仍乱序
                }
            }
            //数组已经完成排序了，直接离开不需要重复循环
            if(sort_finish != 0)
                break ;
        }
    }
    else//从小到大
    {
        for (uint32_t i = 0; i < lenght - 1; i++)
        {
            uint8_t sort_finish = 1 ;//排序完成标志位
            for (uint32_t j = 0; j < lenght - i - 1; j++)
            {
                if(list[j] > list[j+1])
                {
                    int32_t swap = list[j];
                    list[j] = list[j+1];
                    list[j+1] = swap;
                    sort_finish = 0 ;//置零表示数据可能仍乱序
                }
            }
            //数组已经完成排序了，直接离开不需要重复循环
            if(sort_finish != 0)
                break ;
        }
    }
}

/**
 * \brief 选择排序（int32）
 * \param[out] list: 待排序数组
 * \param[in] lenght: 数组元素个数
 * \param[in] dir: 排序方向
 *              0：升序
 *              1：降序
*/
void Sort_Selection_32(int32_t *list, uint32_t lenght, uint8_t dir)
{
    if(dir != 0)//从大到小
    {
        for(uint32_t i = 0; i < lenght - 1; i++)
        {
            uint32_t max_addr = i ;
            for(uint32_t j = i + 1; j < lenght; j++)
            {
                if(list[j] > list[max_addr])
                    max_addr = j ;
            }
            int32_t swap = list[i];
            list[i] = list[max_addr];
            list[max_addr] = swap ;
        }
    }
    else//从小到大
    {
        for(uint32_t i = 0; i < lenght - 1; i++)
        {
            uint32_t min_addr = i ;
            for(uint32_t j = i + 1; j < lenght; j++)
            {
                if(list[j] < list[min_addr])
                    min_addr = j ;
            }
            int32_t swap = list[i];
            list[i] = list[min_addr];
            list[min_addr] = swap ;
        }
    }
}