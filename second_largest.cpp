int secondMax(int &arr[]){
  int n = arr.size();
  int max1 = INT_MIN, max2 = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;    // old max becomes second max
            max1 = arr[i];  // new max found
        }
        else if (arr[i] < max1 && arr[i] > max2) {
            max2 = arr[i];  // update second max
        }
    }

    return (max2 == INT_MIN) ? -1 : max2;
}
