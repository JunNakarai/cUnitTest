# cUnitTest

VScodeの**テストエクスプローラ**でC言語の単体テストの実施するために必要な手順を示す。

## 環境

```zsh
ruby 2.6.10p210 (2022-04-12 revision 67958) [universal.arm64e-darwin24]
```
## インストール

```zsh
sudo gem install ceedling
```

## 手順

`ceedling`を使用しプロジェクトを生成する

```ruby
ceedling new project
```

ルートディレクトリの`project.yml`の`:plugins:`に`xml_tests_report`を追加する


