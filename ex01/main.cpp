#include "Zombie.hpp"

int main(void)
{
    int N = 5;
    
    std::cout << "Création d'une horde de " << N << " zombies..." << std::endl;
    Zombie* horde = zombieHorde(N, "Walker");
    
    for (int i = 0; i < N; i++)
    {
        horde[i].announce();
    }
    
    std::cout << "Destruction de la horde..." << std::endl;
    delete[] horde;
    
    return 0;
}