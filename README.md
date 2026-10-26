# ReSkate Türkçe

skate. için ReSkate başlatıcısını ve oyunun arayüzünü Türkçeye çeviren bir yama.

> **Gayriresmî bir hayran çevirisidir.** EA, Full Circle veya ReSkate geliştiricileriyle hiçbir
> bağlantısı yoktur ve onlar tarafından desteklenmez. ReSkate'in kendisi
> [ReSkate katkıcılarının](https://github.com/Dingo-Shenanigans/ReSkate) eseridir; bu depo onun bir
> çatalıdır (fork). Yamayla ilgili sorunları resmî ReSkate kanallarına değil, bu deponun
> [Issues](https://github.com/system-conf/ReSkate/issues) bölümüne bildir.
>
> Orijinal İngilizce README: [README.en.md](README.en.md)

## İndir

**[En son sürümü indir](https://github.com/system-conf/ReSkate/releases/latest)**

Şu anki sürüm: **v2.1.2-tr.2** (ön sürüm), **ReSkate 2.1.2** tabanlı. Kurulum aşağıda.

## Neler Türkçe?

- **Başlatıcı:** tamamen Türkçe (717 metin).
- **Oyun:** metinlerin yaklaşık **%94'ü** (20.774 metnin 19.448'i): menüler, butonlar, HUD,
  açıklamalar ve diyaloglar. Marka, mekân ve trick adları ile üç uzun yasal/sağlık bildirimi
  İngilizce kalır.
- **Doğru Türkçe büyük harfler:** oyunun kendisinin büyük harfe çevirdiği yazılar artık Türkçe
  kurallara uyar (DIL değil **DİL**, ISTANBUL değil **İSTANBUL**).

### tr.1'den farkı

- ReSkate **2.1.1** yerine **2.1.2** tabanlı.
- Oyun çevirisi artık bir **ReSkate eklenti modu**: `Mods\system_conf-ReSkate_Turkce`. Eski
  `%LOCALAPPDATA%\ReSkate\reskate-strings.json` dosyası artık kullanılmıyor.
- Çeviri kapsamı ilk turdaki ~9.200 metinden 19.448 metne çıktı.
- Başlatıcının mod listesi yalnızca eklenti içeren modlar için "yüklenecek bir şey yok" demiyor ve
  Thunderstore'da olmayan bir modun kendi `icon.png` simgesini gösteriyor.

### Neden değiştirilmiş ReSkate.dll gerekiyor?

Çeviri modu, oyunun metinlerini değiştirmek için ReSkate eklenti API'sinin `reskate.strings`
özelliğini kullanır. Bu özellik resmî ReSkate'e önerildi
([#378](https://github.com/Dingo-Shenanigans/ReSkate/pull/378)) ama henüz eklenmedi. O yüzden şimdilik
bu çataldan derlenen `ReSkate.dll` gerekiyor. PR kabul edildiğinde mod Thunderstore'a konacak ve
özel DLL'e gerek kalmayacak; resmî ReSkate ile başlatıcıdaki **MOD BUL** sayfasından kurulabilecek.

## ReSkate nedir?

ReSkate, skate. oyununu EA sunucuları olmadan oynamanı sağlayan, topluluk yapımı bir başlatıcı ve
eklentidir:

- **Çevrimdışı oyun:** kaykaycın, kıyafetlerin ve ilerlemen bilgisayarında saklanır.
- **Çok oyunculu:** Steam lobileri, adanmış sunucular, yakınlık sesli sohbeti.
- **Park Editörü:** nesneleri yerleştir, taşı, kaydet; her haritada tekrar kullan.
- **Modlar:** `Mods\` klasörüne at ya da başlatıcıdan [Thunderstore](https://thunderstore.io/c/reskate/)
  modlarını kur.

Ayrıntılar için [README.en.md](README.en.md).

## Gereksinimler

- Steam'de **skate.** (ücretsiz: Steam kütüphanene eklemen yeterli). Epic veya EA app kopyaları
  ReSkate ile çalışmaz.
- ReSkate **2.1.2** (yamanın içinde geliyor: `ReSkateLauncher.exe` ve `ReSkate.dll`).
- Yaklaşık **14 GB** boş alan.
- Oyun dili **İngilizce** (çeviri İngilizce metinlerin yerine geçer).

## Kurulum (ilk kez)

1. Kendine ait **yeni, boş bir klasör** oluştur, örneğin `D:\Oyunlar\ReSkate`. Steam'in skate.
   klasörünü **kullanma**: ReSkate oyunun kendi kopyasını bu klasöre kurar, böylece Steam
   güncellemeleri onu bozamaz.
2. İndirdiğin zip'in **içindekileri** bu klasöre çıkar. Klasörde `ReSkateLauncher.exe`,
   `ReSkate.dll` ve `Mods\system_conf-ReSkate_Turkce\` olmalı. Çeviri modu zip'te zaten `Mods\`
   altında olduğu için ayrıca taşıman gerekmez.
3. `ReSkateLauncher.exe` dosyasını çalıştır.
   - İstendiğinde skate.'e sahip Steam hesabınla oturum aç (**STEAM'DE OTURUM AÇ**). QR kodu Steam
     uygulamasıyla okutabilir ya da kullanıcı adı, şifre ve Steam Guard kullanabilirsin.
   - Başlatıcı desteklenen oyun sürümünü indirir ve dosyaları doğrular.
   - İpucu: Steam'in skate. klasörünün içeriğini önce bu klasöre kopyalarsan, değişmemiş dosyalar
     tekrar indirilmez.
4. **AYARLAR → GELİŞMİŞ** sayfasında **ReSkate güncellemelerini kur** seçeneğinin işaretini
   kaldır. Bu açıkken başlatıcı resmî ReSkate sürümünü indirip bu yamanın `ReSkate.dll` ve
   `ReSkateLauncher.exe` dosyalarının üzerine yazar. Resmî DLL'de `reskate.strings` olmadığı için
   oyun İngilizceye döner ve başlatıcının Türkçesi de gider.
5. Dil: Windows Türkçeyse başlatıcı kendiliğinden Türkçe açılır. Değilse
   **AYARLAR → GELİŞMİŞ → Dil → Türkçe**.
6. **MODLAR → MODLARIM** sayfasında **ReSkate Türkçe** modunun açık olduğundan emin ol (genelde
   kendiliğinden açıktır).
7. İsteğe bağlı: aynı sayfadaki **Çökme raporları gönder** seçeneğini kapatabilirsin. Bu dosyalar
   resmî olmadığı için raporlar ReSkate geliştiricilerinin işine yaramaz.
8. **OYNA**'ya bas.

## tr.1'den yükseltme

1. Oyunu ve başlatıcıyı kapat.
2. Zip'teki `ReSkateLauncher.exe` ve `ReSkate.dll` dosyalarını ReSkate klasörüne kopyalayıp eskilerin
   üzerine yaz.
3. Zip'teki `Mods` klasörünü de ReSkate klasörüne kopyala (sonuç:
   `<ReSkate klasörü>\Mods\system_conf-ReSkate_Turkce\`).
4. `%LOCALAPPDATA%\ReSkate\reskate-strings.json` dosyasını sil: artık kullanılmıyor. (Açmak için
   **Win+R**'ye bas, `%LOCALAPPDATA%\ReSkate` yaz ve Enter'a bas.)
5. **ReSkate güncellemelerini kur** kapalı kalmalı (yukarıdaki 4. adım).
6. Başlatıcı yeni oyun sürümünü isterse indirmesine izin ver, sonra **OYNA**.

## Geri alma

1. Oyunu ve başlatıcıyı kapat.
2. `<ReSkate klasörü>\Mods\system_conf-ReSkate_Turkce\` klasörünü sil (ya da **MODLAR → MODLARIM**
   sayfasında modu kapat).
3. Başlatıcıda **ReSkate güncellemelerini kur** seçeneğini tekrar aç: başlatıcı resmî ReSkate
   dosyalarını indirir. Ya da resmî ReSkate zip'indeki `ReSkateLauncher.exe` ve `ReSkate.dll`
   dosyalarını elle kopyala.
4. Başlatıcıyı İngilizceye almak için **AYARLAR → GELİŞMİŞ → Dil → English**.

## Notlar / Sorun giderme

- **Spotify:** bu yamadaki `ReSkate.dll` Spotify Connect desteği olmadan derlendi; Spotify
  entegrasyonu çalışmaz.
- **Çok oyunculu:** resmî ReSkate 2.1.2 oyuncuları ve sunucularıyla uyumlu. Yama ReSkate 2.1.2
  (`v2.1.2` etiketi) üzerine kurulu ve çok oyunculu protokol sürümü (53) resmî 2.1.2 ile aynı; yama
  çok oyunculu koduna dokunmaz. Çeviri yalnızca senin ekranındaki yazıları değiştirir (istemci
  tarafı eklenti), diğer oyuncuların yamaya ihtiyacı yok.
- **Oyunda hiçbir şey Türkçe değil.** Oyun dilinin İngilizce olduğunu, modun
  `Mods\system_conf-ReSkate_Turkce\` içinde ve **MODLARIM**'da açık olduğunu, `ReSkate.dll`'in bu
  yamadan geldiğini kontrol et. **ReSkate güncellemelerini kur** açıksa başlatıcı resmî dosyaları
  geri yüklemiş olabilir; kapatıp yamanın dosyalarını tekrar kopyala.
- **Bazı yazılar hâlâ İngilizce.** Marka, mekân ve trick adları bilerek İngilizce bırakıldı; geri
  kalan az sayıda metin henüz çevrilmedi.
- **Bazı yazılar taşıyor ya da kesiliyor.** Türkçe metinler bazen İngilizceden uzun. Ekran
  görüntüsüyle bildir (aşağıya bak).
- **Steam oyunu güncelledi.** ReSkate kendi oyun kopyasını kullanır ve tek bir oyun sürümünü
  destekler. Yeni oyun sürümü için ReSkate desteğini ve bu yamanın güncellemesini beklemen gerekir.
- **Antivirüs uyarı veriyor.** `ReSkate.dll` ve `ReSkateLauncher.exe` imzalı değil ve `ReSkate.dll`
  oyuna yüklendiği için bazı antivirüsler uyarabilir. Dosyalar bu deponun kaynak kodundan derlenir;
  SHA-256 özetleri sürüm notlarında yazar. Gerekirse ReSkate klasörünü antivirüste istisnalara ekle.

## Katkı / hata bildirimi

Hataları ve önerileri bu deponun [Issues](https://github.com/system-conf/ReSkate/issues) bölümüne
yaz. Çeviri düzeltmesi önermek için bir Issue aç ve şunları ekle:

- ekran görüntüsü,
- İngilizce metin,
- önerdiğin Türkçe metin.

Oyun çevirisi (eklenti modu): [`contrib/translation-tr/mod/`](contrib/translation-tr/mod/), metinler
[`data/strings.json`](contrib/translation-tr/mod/data/strings.json) içinde.
Başlatıcı çevirisi: [`Launcher/languages/tr.json`](Launcher/languages/tr.json)

## Upstream PR'lar

Bu yamanın ihtiyaç duyduğu özellikler resmî ReSkate'e önerildi:

- [#313](https://github.com/Dingo-Shenanigans/ReSkate/pull/313): başlatıcı çevirisi ve Dil ayarı.
- [#378](https://github.com/Dingo-Shenanigans/ReSkate/pull/378): eklentiler için `reskate.strings`
  ve Türkçe büyük/küçük harf kuralları.
- [#379](https://github.com/Dingo-Shenanigans/ReSkate/pull/379): mod listesinde eklenti modları ve
  yerel `icon.png`.
- Belgeler: [Dingo-Shenanigans/docs#5](https://github.com/Dingo-Shenanigans/docs/pull/5).

Kabul edildiklerinde değiştirilmiş DLL ve EXE gerekmez; çeviri normal bir Thunderstore modu olarak
kurulabilir.

## Lisans

ReSkate GPLv3 lisanslıdır (bkz. [LICENSE](LICENSE)). Sürümdeki `ReSkate.dll` ve
`ReSkateLauncher.exe`, bu deponun `turkce-2.1.2` dalından derlenmiştir; kaynak kodunun tamamı burada.
