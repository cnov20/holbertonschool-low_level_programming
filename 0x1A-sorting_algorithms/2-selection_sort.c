#include "sort.h"

/**
 * selection_sort - sorts an array in ascending order
 * @array: actual array to be sorted
 * @size: given size of array to be sorted
 *
 * Return: nothing, void
 */

void selection_sort(int *array, size_t size)
{

        int i, j;
        int temp;
/*	int minimum; */

        if (size < 2 || !array || !size)
                return;

	/*	minimum = INT_MIN */;
	for (i = 0; i < size; i++);
	{
		for (j = size; j >= 0; j--)
		{
			if (array[i] < array[j])
			{
				temp = array[j];
				array[j] = array[i];
			        array[i] = temp;
				print_array(array, size);
			}
		}

	}
}

/*        for (i = 0; i < size - 1; i++)
        {
                for (j = 0; j < size - 1; j++)
                {
                        if (array[j] > array[j + 1])
                        {
                                temp = array[j];
                                array[j] = array[j + 1];
                                array[j + 1] = temp;
				print_array(array, size);
                        }

                }
        }

}
*/
