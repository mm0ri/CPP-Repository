#include <vector>
#include <iostream>

int main()
{
    std::vector<int> z_array = {1, 2, 0, 1, 0, 1, 0, 3, 0, 1};

    unsigned int vector_size = z_array.size();

    for (int i = 0; i < vector_size; i++)
    {
        if (z_array[i] == 0)
        {
            z_array.push_back(z_array[i]);
            z_array.erase(z_array.begin() + i);
        } 
        std::cout << z_array[i] << ",";
    }
}