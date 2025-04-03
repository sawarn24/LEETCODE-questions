class ProductOfNumbers {
public:
vector<int> prefix_products;
    ProductOfNumbers() {
        prefix_products.push_back(1);
        
    }
    
    void add(int num) {
         if (num == 0) {
            prefix_products.clear();
            prefix_products.push_back(1); 
        } else {
            prefix_products.push_back(prefix_products.back() * num);
        }
        
    }
    
    int getProduct(int k) {
        if (k >= prefix_products.size())  
            return 0;  // If we had a reset due to zero, the product is zero.
        return prefix_products.back() / prefix_products[prefix_products.size() - k - 1];
        
       
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */