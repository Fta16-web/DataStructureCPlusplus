
template <typename InputIterator, typename T>
T accumulate(InputIterator first, InputIterator last, T init)
      {
            while (first != last){
                  init = init + *first;
                  first++;
            }
            return init; 
      }
