#include "Requested_transactions.h"
#include "profile.h"

namespace SimpleDigitalWallet {
    System::Void Requested_transactions::profile_button_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Hide();
        if (profile == nullptr) {
            SimpleDigitalWallet::profile^ profileform = gcnew SimpleDigitalWallet::profile(dashboard_form, login, this, current_user);
			profileform->Show();
        }
        else {
            profile->Show();
        }
    }
}