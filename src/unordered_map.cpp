// [[Rcpp::plugins(cpp20)]]
#include <Rcpp.h>
#include <unordered_map>
#include <string>
#include <cstddef>

// [[Rcpp::export]]
Rcpp::XPtr<std::unordered_map<int, int> > unordered_map_i_i(Rcpp::IntegerVector& keys, Rcpp::IntegerVector& values) {
  std::unordered_map<int, int>* m = new std::unordered_map<int, int>;
  const std::size_t v_size = keys.size();
  for(std::size_t i = 0; i != v_size; ++i) {
    (*m)[keys[i]] = values[i];
  }
  Rcpp::XPtr<std::unordered_map<int, int> > p(m);
  return p;
}
// [[Rcpp::export]]
Rcpp::XPtr<std::unordered_map<int, double> > unordered_map_i_d(Rcpp::IntegerVector& keys, Rcpp::NumericVector& values) {
  std::unordered_map<int, double>* m = new std::unordered_map<int, double>;
  const std::size_t v_size = keys.size();
  for(std::size_t i = 0; i != v_size; ++i) {
    (*m)[keys[i]] = values[i];
  }
  Rcpp::XPtr<std::unordered_map<int, double> > p(m);
  return p;
}
// [[Rcpp::export]]
Rcpp::XPtr<std::unordered_map<int, std::string> > unordered_map_i_s(Rcpp::IntegerVector& keys, Rcpp::CharacterVector& values) {
  std::unordered_map<int, std::string>* m = new std::unordered_map<int, std::string>;
  const std::size_t v_size = keys.size();
  for(std::size_t i = 0; i != v_size; ++i) {
    (*m)[keys[i]] = values[i];
  }
  Rcpp::XPtr<std::unordered_map<int, std::string> > p(m);
  return p;
}
// [[Rcpp::export]]
Rcpp::XPtr<std::unordered_map<int, bool> > unordered_map_i_b(Rcpp::IntegerVector& keys, Rcpp::LogicalVector& values) {
  std::unordered_map<int, bool>* m = new std::unordered_map<int, bool>;
  const std::size_t v_size = keys.size();
  for(std::size_t i = 0; i != v_size; ++i) {
    (*m)[keys[i]] = values[i];
  }
  Rcpp::XPtr<std::unordered_map<int, bool> > p(m);
  return p;
}

// [[Rcpp::export]]
Rcpp::XPtr<std::unordered_map<double, int> > unordered_map_d_i(Rcpp::NumericVector& keys, Rcpp::IntegerVector& values) {
  std::unordered_map<double, int>* m = new std::unordered_map<double, int>;
  const std::size_t v_size = keys.size();
  for(std::size_t i = 0; i != v_size; ++i) {
    (*m)[keys[i]] = values[i];
  }
  Rcpp::XPtr<std::unordered_map<double, int> > p(m);
  return p;
}
// [[Rcpp::export]]
Rcpp::XPtr<std::unordered_map<double, double> > unordered_map_d_d(Rcpp::NumericVector& keys, Rcpp::NumericVector& values) {
  std::unordered_map<double, double>* m = new std::unordered_map<double, double>;
  const std::size_t v_size = keys.size();
  for(std::size_t i = 0; i != v_size; ++i) {
    (*m)[keys[i]] = values[i];
  }
  Rcpp::XPtr<std::unordered_map<double, double> > p(m);
  return p;
}
// [[Rcpp::export]]
Rcpp::XPtr<std::unordered_map<double, std::string> > unordered_map_d_s(Rcpp::NumericVector& keys, Rcpp::CharacterVector& values) {
  std::unordered_map<double, std::string>* m = new std::unordered_map<double, std::string>;
  const std::size_t v_size = keys.size();
  for(std::size_t i = 0; i != v_size; ++i) {
    (*m)[keys[i]] = values[i];
  }
  Rcpp::XPtr<std::unordered_map<double, std::string> > p(m);
  return p;
}
// [[Rcpp::export]]
Rcpp::XPtr<std::unordered_map<double, bool> > unordered_map_d_b(Rcpp::NumericVector& keys, Rcpp::LogicalVector& values) {
  std::unordered_map<double, bool>* m = new std::unordered_map<double, bool>;
  const std::size_t v_size = keys.size();
  for(std::size_t i = 0; i != v_size; ++i) {
    (*m)[keys[i]] = values[i];
  }
  Rcpp::XPtr<std::unordered_map<double, bool> > p(m);
  return p;
}

// [[Rcpp::export]]
Rcpp::XPtr<std::unordered_map<std::string, int> > unordered_map_s_i(Rcpp::CharacterVector& keys, Rcpp::IntegerVector& values) {
  std::unordered_map<std::string, int>* m = new std::unordered_map<std::string, int>;
  const std::size_t v_size = keys.size();
  for(std::size_t i = 0; i != v_size; ++i) {
    m->emplace(keys[i], values[i]);
  }
  Rcpp::XPtr<std::unordered_map<std::string, int> > p(m);
  return p;
}
// [[Rcpp::export]]
Rcpp::XPtr<std::unordered_map<std::string, double> > unordered_map_s_d(Rcpp::CharacterVector& keys, Rcpp::NumericVector& values) {
  std::unordered_map<std::string, double>* m = new std::unordered_map<std::string, double>;
  const std::size_t v_size = keys.size();
  for(std::size_t i = 0; i != v_size; ++i) {
    m->emplace(keys[i], values[i]);
  }
  Rcpp::XPtr<std::unordered_map<std::string, double> > p(m);
  return p;
}
// [[Rcpp::export]]
Rcpp::XPtr<std::unordered_map<std::string, std::string> > unordered_map_s_s(Rcpp::CharacterVector& keys, Rcpp::CharacterVector& values) {
  std::unordered_map<std::string, std::string>* m = new std::unordered_map<std::string, std::string>;
  const std::size_t v_size = keys.size();
  for(std::size_t i = 0; i != v_size; ++i) {
    m->emplace(keys[i], values[i]);
  }
  Rcpp::XPtr<std::unordered_map<std::string, std::string> > p(m);
  return p;
}
// [[Rcpp::export]]
Rcpp::XPtr<std::unordered_map<std::string, bool> > unordered_map_s_b(Rcpp::CharacterVector& keys, Rcpp::LogicalVector& values) {
  std::unordered_map<std::string, bool>* m = new std::unordered_map<std::string, bool>;
  const std::size_t v_size = keys.size();
  for(std::size_t i = 0; i != v_size; ++i) {
    m->emplace(keys[i], values[i]);
  }
  Rcpp::XPtr<std::unordered_map<std::string, bool> > p(m);
  return p;
}

// [[Rcpp::export]]
Rcpp::XPtr<std::unordered_map<bool, int> > unordered_map_b_i(Rcpp::LogicalVector& keys, Rcpp::IntegerVector& values) {
  std::unordered_map<bool, int>* m = new std::unordered_map<bool, int>;
  const std::size_t v_size = keys.size();
  for(std::size_t i = 0; i != v_size; ++i) {
    (*m)[keys[i]] = values[i];
  }
  Rcpp::XPtr<std::unordered_map<bool, int> > p(m);
  return p;
}
// [[Rcpp::export]]
Rcpp::XPtr<std::unordered_map<bool, double> > unordered_map_b_d(Rcpp::LogicalVector& keys, Rcpp::NumericVector& values) {
  std::unordered_map<bool, double>* m = new std::unordered_map<bool, double>;
  const std::size_t v_size = keys.size();
  for(std::size_t i = 0; i != v_size; ++i) {
    (*m)[keys[i]] = values[i];
  }
  Rcpp::XPtr<std::unordered_map<bool, double> > p(m);
  return p;
}
// [[Rcpp::export]]
Rcpp::XPtr<std::unordered_map<bool, std::string> > unordered_map_b_s(Rcpp::LogicalVector& keys, Rcpp::CharacterVector& values) {
  std::unordered_map<bool, std::string>* m = new std::unordered_map<bool, std::string>;
  const std::size_t v_size = keys.size();
  for(std::size_t i = 0; i != v_size; ++i) {
    (*m)[keys[i]] = values[i];
  }
  Rcpp::XPtr<std::unordered_map<bool, std::string> > p(m);
  return p;
}
// [[Rcpp::export]]
Rcpp::XPtr<std::unordered_map<bool, bool> > unordered_map_b_b(Rcpp::LogicalVector& keys, Rcpp::LogicalVector& values) {
  std::unordered_map<bool, bool>* m = new std::unordered_map<bool, bool>;
  const std::size_t v_size = keys.size();
  for(std::size_t i = 0; i != v_size; ++i) {
    (*m)[keys[i]] = values[i];
  }
  Rcpp::XPtr<std::unordered_map<bool, bool> > p(m);
  return p;
}