


#include <iostream>
int main() {

    int num;
    int guess;
    int tries;
    srand(time(NULL));
    num = (rand() % 100) + 1;
    do{
        std::cout << "Enter a num from  1 to 100: ";
        std::cin >> guess;
        tries++;
        
        if(guess > num){
            std::cout << "Too high!" << std::endl;
        } else if(guess < num){
            std::cout << "Too Low!" << std::endl;
        } else{
            std::cout << "Right! Tries: " << tries << std::endl;
        }
    }while(guess != num);
    
    return 0;
}
