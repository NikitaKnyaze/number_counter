
#include <iostream>
#include <vector>

class simple_functor
{
   int count{}, sum{};
   const std::vector<int> vec;

public:
   simple_functor(const std::vector<int>& v):vec(v)
   {};

   void operator()()
   {
      for (auto c : vec)
      {
         if ((c % 3)==0)
         {
            ++count;
            sum += c;
         }
      }
   };
   int get_sum()
   {
      return sum;
   }
   int  get_count()
   {
      return count;
   }
};

int main()
{
   std::vector<int> vec{4, 1, 3, 6, 25, 54};
   simple_functor sf(vec);
   sf();
   std::cout << "Sum = " << sf.get_sum() << " " << "; Count = " << sf.get_count();

   return 0;
}


