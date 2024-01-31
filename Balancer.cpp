#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

std::unordered_map<std::string, int> countElements(const std::string& compound) {
    std::unordered_map<std::string, int> elements;
    return elements;
}

std::string balanceSynthesis(const std::string& reactants, const std::string& product) {
    std::unordered_map<std::string, int> reactantElements = countElements(reactants);
    std::unordered_map<std::string, int> productElements = countElements(product);

    std::string balancedReaction = "Balanced synthesis reaction: " + reactants + " -> " + product;
    return balancedReaction;
}

std::string balanceDecomposition(const std::string& compound) {
    std::unordered_map<std::string, int> compoundElements = countElements(compound);

    std::string balancedReaction = "Balanced decomposition reaction: " + compound + " -> ";
    return balancedReaction;
}
std::string balanceIonic(const std::string& reactants, const std::string& product) {

    std::vector<std::string> reactantList;
    std::vector<std::string> productList;

      size_t pos = 0;
    while ((pos = reactants.find('+')) != std::string::npos) {
        std::string reactant = reactants.substr(0, pos);
        reactantList.push_back(reactant);
        reactants.erase(0, pos + 1);
    }
    reactantList.push_back(reactants);

        pos = 0;
    while ((pos = product.find('+')) != std::string::npos) {
        std::string product = product.substr(0, pos);
        productList.push_back(product);
        product.erase(0, pos + 1);
    }
    productList.push_back(product);

      std::unordered_map<std::string, int> reactantElements;
    std::unordered_map<std::string, int> productElements;

    for (const auto& reactant : reactantList) {

    }

     for (const auto& product : productList) {

     }

      std::string balancedEquation = "Balanced ionic equation: ";
        return balancedEquation;
}

    int main() {
    std::string synthesisReactants = "H2 + O2";
    std::string synthesisProduct = "H2O";
    std::string balancedSynthesis = balanceSynthesis(synthesisReactants, synthesisProduct);
    std::cout << balancedSynthesis << std::endl;

    std::string compound = "H2O";
    std::string balancedDecomposition = balanceDecomposition(compound);
    std::cout << balancedDecomposition << std::endl;

    return 0;
    
}
