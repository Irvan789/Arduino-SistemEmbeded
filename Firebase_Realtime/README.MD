# Tentang
Dasar menggunakan Firebase Realtime database.

# Required Library
- Firebase ESP32 Client

# Konfigurasi Firebase
1. Buka [firebase.google.com](https://firebase.google.com)
2. Klik **Go To Console** > **Add Project**.
3. Pada **Project Name** isi sesuai keinginan, Klik **Continue**.
4. Untuk **Google Analytics for your Firebase project** matikan **Enable Google Analytics for this project**, Klik **Create Project**.
5. Tunggu beberapa saat sampai project berhasil dibuat, Lalu klik **Continue**.
6. Pada halama utama project, Klik **Build** > **Raltime Database** > **Create Database**.
7. Untuk **Realtime Database location** pilih **Singapore (asia-southeast1)**, klik **Next**.
8. Untuk **Security Rules** pilih **Start in test mode**, klik **Enable**.
9.  Tunggu beberapa saat, sampai halaman **Realtime Database** muncul.
10. Salin **URL** Realtime Database yang telah dibuat sebagai `FIREBASE_HOST`.
11. Klik **Project Overview**, lalu klik icon ⚙️ > **Project settings**.
12. Klik tab **Service accounts** > **Database secrets**.
13. Arahkan kursor pada **●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●**, klik **Show**.
14. Salin **Secret** sebagai `FIREBASE_AUTH`.

[< Kembali](https://github.com/Irvan789/Sistem-Embeded)