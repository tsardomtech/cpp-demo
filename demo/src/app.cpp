#include "client.h"

int main() {
    tsar::client client = tsar::client();

    // Get these credentials from: https://tsar.cc/app/*/settings
    tsar::tsar_status_t status = client.init({ /* app id, client key & debug print */
      "d45750ee-7c2c-4453-9a90-397007bc1b9d",
      "MFkwEwYHKoZIzj0CAQYIKoZIzj0DAQcDQgAElfwlA3IWW8+tI4+T0HNYA0ZmaTQEqBrEbygPgoaAvsK68KRvVXJN/IXOthd3ulxv6LCPqdRewAsG7srEmwAzhA==",
      true
    });

    if (status == tsar::tsar_status_t::success) {
        printf("User ID: %s\n", client.subscription.user.id.c_str());
    }
    else {
        printf("Auth failed. Status code: %i\n", status);
    }

    std::cin.get();
    return EXIT_SUCCESS;
}