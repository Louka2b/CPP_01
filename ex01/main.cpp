#include "Zombie.hpp"

int main(void)
{
    int N = 12;
    
    std::cout << "create an order of " << N << " zombies : " << std::endl;
    Zombie* horde = zombieHorde(N, "LeZombieTigre");
    
    for (int i = 0; i < N; i++)
    {
        horde[i].announce();
    }
    
    std::cout << "DESTRUCT THE ORDER : " << std::endl;
    delete[] horde;
    
    return 0;
}