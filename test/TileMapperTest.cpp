/**
 * \file TileMapperTest.cpp
 * \brief TileMapper unit test
 * \author Mathieu BAGUE
 * \date 10/04/2016
 */

#include <SFML/Graphics/Image.hpp>

#include <gtest/gtest.h>

#include <zzbgames/tileset/Dimension.hpp>
#include <zzbgames/tileset/Insets.hpp>
#include <zzbgames/tileset/Tileset.hpp>
#include <zzbgames/tileset/TileMapper.hpp>

namespace zzbgames
{

namespace tileset
{

TEST(TileMapperTest, getTileIndexes)
{
    Tileset tileset("res/tileset.png", Dimension(8, 8), Insets(1, 1, 0, 0), Insets(0, 0, 1, 1));

    sf::Image image;
    image.loadFromFile("res/map.png");

    TileMapper tileMapper(tileset);
    const std::vector<unsigned long>& indexes1 = tileMapper.getTileIndexes(image);
    const std::vector<unsigned long> expected = { 1, 2, 0, 3, 3, 1, 2, 0, 0, 3, 1, 2, 4, 0, 3, 1 };

    ASSERT_EQ(expected, indexes1);
}

}

}