#include <iostream>
#include <armadillo>
int main()
{
arma::vec v1;
v1 << 1.1 << 2.2 << -1.5;
arma::vec v2;
v2 << 4.2 << 5.2 << 2.1;
std::cout<< v1 << std::endl;
std::cout<< v2 << std::endl;
std::cout<< v1+v2 << std::endl;
// inner product
std::cout<< v1.t()*v2 << std::endl;
// cross product
std::cout<< arma::cross(v1, v2) << std::endl;
return 0;
}
