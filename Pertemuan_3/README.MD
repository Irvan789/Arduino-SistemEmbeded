# Tentang
Pada pertemuan 3 & 4, mahasiswa/i diajarkan menggunakan SPI TFT Module ILI9488 dengan ESP32.

# Required Library
- [TFT eSPI](https://github.com/Bodmer/TFT_eSPI)

# Konfigurasi TFT eSPI
- Install terlebih dahulu library **TFT eSPI**.
- Buka **File Explorer** > **Documents** > **Arduino** > **libraries** > **TFT_eSPI**.
- Edit file **User_Setup.h**.
- Comment line 45
- Uncomment line 54.
- Comment line 169~171.
- Uncomment line 206~211.
- Simpan file tersebut.

# Konfigurasi PIN 
| TFT SPI    | ESP32  |
|------------|--------|
| VCC        | VCC 5V |
| GND        | GND    |
| CS         | 15     |
| RESET      | 4      |
| DC/RS      | 2      |
| SDI (MOSI) | 23     |
| SCK        | 18     |
| LED        | VCC 5V |
| SDO (MISO) | 19     |

[< Kembali](https://github.com/Irvan789/Sistem-Embeded)
