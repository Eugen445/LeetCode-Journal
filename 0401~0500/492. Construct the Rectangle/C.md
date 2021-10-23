```C
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructRectangle(int area, int* returnSize){

    int *res = (int*)malloc(sizeof(int) * 2);
    *returnSize = 2;
    int w = sqrt(area);
    while (area % w) {
        w--;
    }
    res[0] = area / w;
    res[1] = w;

    return res;
}
```

