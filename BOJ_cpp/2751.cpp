#include <iostream>

void merge(int *list, int *sorted, int left, int mid, int right) {
    int i = left, j = mid + 1, k = left, l;
    
    while (i <= mid && j <= right) {
        if (list[i] <= list[j]) sorted[k++] = list[i++];
        else sorted[k++] = list[j++];
    }
    if (i > mid) {
        for (l = j; l <= right; l++) {
            sorted[k++] = list[l];
        }
    } else {
        for (l = i; l <= mid; l++)  {
            sorted[k++] = list[l];
        }
    }
    for(l = left; l <= right; l++){
        list[l] = sorted[l];
    }
}

void merge_sort(int list[], int sorted[], int left, int right){
  int mid;

  if(left < right){
    mid = (left + right) / 2;
    merge_sort(list, sorted, left, mid);
    merge_sort(list, sorted,mid+1, right);
    merge(list, sorted, left, mid, right);
  }
}

int main(void) {
    size_t limit, bucket;
    std::cin >> limit;
    int sorted[limit];
    int vec[limit];
    for (int i = 0; i < limit; i++) {
        std::cin >> bucket;
        vec[i] = bucket;
    }
    merge_sort(vec, sorted, 0, limit - 1);
    for (int i = 0; i < limit; i++) {
        std::cout << sorted[i] << '\n';
    }    
}

