#include <torch/torch.h>
#include <iostream>

int main() {
  torch::Tensor tensor = torch::rand({2, 3});
  std::cout << tensor << std::endl;
}



// #include <iostream>
// #include <stdexcept>
// #include <vector>
// #include <algorithm>
// #include <numeric>
// #include <variant>
// #include <tuple>
// #include <set>
// #include <map>
// #include <optional>
// #include <sstream>
// #include <string>
// #include <random>
// #include <queue>
// #include <chrono>

// #include <torch/torch.h>

// int main(){
//   std::cout << "helloworld" << std::endl;
//     // Specify the path to the .pth file
//   std::string filePath = "your_weights.pth";

//   // Load the serialized object from the .pth file
//   torch::serialize::InputArchive archive;
//   archive.load_from_file(filePath);

//   // Load the object into a torch::IValue
//   torch::IValue obj;
//   archive.read("key_name", obj);

//   // Access the loaded object as needed
//   // ...

//   return 0;
// }

