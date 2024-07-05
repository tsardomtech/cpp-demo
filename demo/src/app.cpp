#include "client.h"

int main() {
    tsar::client client = tsar::client();

    // Get these credentials from: https://tsar.cc/app/*/settings
    tsar::tsar_status_t status = client.init({ /* app id, client key & debug print */
      "8d7bc844-077e-45fe-afbb-4b3642b0914f",
      "MFkwEwYHKoZIzj0CAQYIKoZIzj0DAQcDQgAEzcNYLREd/dNjVqgpkfJo4maY0TAn7HlslV5Q2qo2T1yCdqXqUEn39IIKQ3N+djhLUwlNxbvRz3zJDOFVmcbt4g==",
      true
    });

    switch (status) {
    case tsar::tsar_status_t::success:
        printf("User ID: %s\n", client.subscription.user.id.c_str());
        break;
    default:
        printf("Auth failed. Status code: %i\n", status);
        break;
    };  

    std::cin.get();
    return EXIT_SUCCESS;
}