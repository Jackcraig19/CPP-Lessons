#include "assets.hpp"
#include <string>
#include <fstream>
#include <vector>
#include <iostream>
#include <filesystem>
#include <nlohmann/json.hpp>

using nlohmann::json;
using std::string;

namespace assets
{
    std::map<string, sf::Sprite> sprites;
    std::vector<sf::Texture> textures;
    int sq_size = 16;

    void loadFromSheet(const string &folder_path)
    {
        string sheet_path = folder_path + "sheet.png";
        string manifest_path = folder_path + "manifest.json";
        
        std::ifstream ifs(manifest_path);
        json jf = json::parse(ifs);
        ifs.close();

        sf::Texture sheet;
        textures.push_back(sheet);
        textures.back().loadFromFile(sheet_path);

        for (const auto &elem : jf["mani"])
        {
            int x = elem["x"];
            int y = elem["y"];
            int w = elem["w"];
            int h = elem["h"];
            sprites[elem["name"]] = sf::Sprite(textures.back(), sf::IntRect(x, y, w, h));
        }
    }

    sf::Sprite &getSprite(const string &name)
    {
        return sprites[name];
    }
};