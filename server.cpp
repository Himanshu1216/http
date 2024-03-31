#include "crow_all.h"

int main() {
  crow::SimpleApp app;

  CROW_ROUTE(app, "/")([]() {
    return "Hello, world!";
  });
  
  app.port(3000).multithreaded().run();
  return 0;
}
