# ReSkate Türkçe Yama (resmî değil)

skate. için ReSkate'e Türkçe arayüz getiren, gayriresmî bir çeviri. Bu ilk sürüm oyundaki menüleri,
butonları ve arayüz yazılarını (ilk tur, yaklaşık 9.200 metin) ve ReSkate başlatıcısını (739 metin)
kapsıyor. Diyaloglar, uzun metinler ve oyun içi ReSkate menüsü (Insert) henüz çevrilmedi.

Oyun içi çeviri, ReSkate'in `reskate-strings.json` özelliğiyle yükleniyor: oyunun kendi metinlerinin
yerine geçen bir dosya (bkz. [contrib/text-overrides.md](contrib/text-overrides.md)). Bu özellik ve
başlatıcının dil desteği henüz resmî ReSkate sürümünde olmadığı için yamayla birlikte değiştirilmiş
`ReSkate.dll` ve `ReSkateLauncher.exe` geliyor. Not: bu DLL'de Spotify entegrasyonu yok.

## Gereksinimler

- ReSkate **2.1.1**
- skate. oyun sürümü (build) **25414733**
- Oyun dili **İngilizce** (çeviri İngilizce metinlerin üzerine yazılıyor)

## Kurulum

1. Oyunu ve ReSkate başlatıcısını kapatın.
2. ReSkate klasöründeki (`Skate.exe` ve `ReSkateLauncher.exe` dosyalarının olduğu yer)
   `ReSkateLauncher.exe` ve `ReSkate.dll` dosyalarını yedekleyin, örneğin adlarının sonuna `.yedek`
   ekleyin.
3. Zip'teki `ReSkateLauncher.exe` ve `ReSkate.dll` dosyalarını aynı klasöre kopyalayın.
4. `reskate-strings.json` dosyasını `%LOCALAPPDATA%\ReSkate\` klasörüne koyun (Windows Gezgini'nin
   adres çubuğuna `%LOCALAPPDATA%\ReSkate` yazıp Enter'a basarak açabilirsiniz).
5. Başlatıcıyı açın. Ayarlar'da (Settings) **ReSkate güncellemelerini kur** (Install ReSkate updates)
   seçeneğinin işaretini kaldırın. Kaldırmazsanız başlatıcı resmî dosyaları geri yükler ve Türkçe
   kaybolur.
6. İsteğe bağlı: **Çökme raporları gönder** (Send crash reports) seçeneğini de kapatabilirsiniz; bu
   dosyalar resmî olmadığı için raporlar ReSkate geliştiricilerinin işine yaramaz.
7. Oyunu başlatın. Yazılar Türkçe görünmelidir.

Başlatıcının dili: Windows Türkçeyse kendiliğinden Türkçe açılır. Değilse **AYARLAR → GELİŞMİŞ →
Dil → Türkçe** (Settings → ADVANCED → Language).

## Geri alma

1. Oyunu ve başlatıcıyı kapatın.
2. Yedeklediğiniz `ReSkateLauncher.exe` ve `ReSkate.dll` dosyalarını geri koyun (veya başlatıcıda
   ReSkate güncellemelerini tekrar açın; başlatıcı resmî dosyaları indirir).
3. `%LOCALAPPDATA%\ReSkate\reskate-strings.json` dosyasını silin.

## Uyarı

Bu yama gayriresmîdir. EA, Full Circle veya ReSkate geliştiricileriyle hiçbir bağlantısı yoktur
ve onlar tarafından desteklenmez. Yamayla ilgili sorunları resmî ReSkate kanallarına değil, bu
deponun Issues bölümüne bildirin. Kullanım riski size aittir.

## Kaynak kodu

ReSkate GPLv3 lisanslıdır. Sürümdeki `ReSkate.dll` ve `ReSkateLauncher.exe`, bu deponun `turkce`
dalından derlenmiştir; kaynak kodunun tamamı burada. Oyun çevirisi
`contrib/translation-tr/reskate-strings.json`, başlatıcı çevirisi `Launcher/languages/tr.json`.
