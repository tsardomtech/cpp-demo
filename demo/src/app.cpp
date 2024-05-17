#include "client.h"

int main() {
  tsar::client client = tsar::client();

  // Get these credentials from: https://tsar.cc/app/*/settings
  tsar::tsar_status_t status = client.init({
    "00000000-0000-0000-0000-000000000000",
    "MFkwEwY...GAr/ITBqA==",
    true
  });

  if (status == tsar::tsar_status_t::success) {
    printf("User ID: %s\n", client.subscription.user.id.c_str());
  } else {
    printf("Auth failed. Status code: %i\n", status);
  }

  std::cin.get();
  return EXIT_SUCCESS;
}
