void bubble_sort(int* arr, int size){
    
    for(int i=0; i<size; ++i){
        bool have_no_swap = true;
        for(int j=0; j<size-i-1; ++j){
            if(arr[j] > arr[j+1]){
                std::swap(arr[j], arr[j+1]);
                have_no_swap = false;
            }
            if(have_no_swap){
                break;
            }
        }
    }
 return ;
}
