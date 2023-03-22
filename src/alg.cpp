// Copyright 2021 NNTU-CS

int countPairs1(int *arr,int len,int value) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        for (int j = i+1; j < len; j++) {
            if (arr[i] + arr[j] == value) {
                count++;
            }
        }
    }
    return count;
}
int countPairs3(int *arr,int len,int value) {
    int count3 = 0;
    for (int i = 0; i < len - 1; i++) {
    int lastIndex = len;
    int firstIndex = i;
    while (firstIndex < lastIndex - 1) {
      int middle = (firstIndex + lastIndex) / 2;
      if (arr[i] + arr[middle] == value) {
        count3++;
        int middle3 = middle + 1;
        while (arr[i] + arr[middle3] == value && middle3 < lastIndex) {
          count3++;
          middle3++;
        }
        middle3 = middle - 1;
        while (arr[i] + arr[middle3] == value && middle3 > firstIndex) {
          count3++;
          middle3--;
        }
        break;
      }
      if (arr[i] + arr[middle] > value) {
        lastIndex = middle;
      } else {
       firstIndex = middle;
      }
    }
  }
    return count3;
}
int countPairs2(int *arr,int len,int value){
    int count2 = 0;
  for (int i = 0; i < len - 1; i++) {
    for (int j = len - 1; j > i; j--) {
      if (arr[i] + arr[j] == value) {
       count2++;
      }
    }
  }
    return count2;
}
