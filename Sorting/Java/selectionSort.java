public class Main {
    public static void main(String[] args) {

        int arr [] = {8,3,4,2,10,22};

        selectionSort(arr);
        for(int x : arr){
            System.out.println(x);
        }

    }

    private static void selectionSort(int[] arr) {
        for(int i = 0;i<arr.length-1;i++){
            int min = i;

            for(int j = i;j<arr.length;j++){
                if(arr[j]<arr[min]){
                    min = j;
                }
            }

            //swap
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;

        }
    }
}
