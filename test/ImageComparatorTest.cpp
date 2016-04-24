/**
 * \file ImageComparatorTest.cpp
 * \brief ImageComparator unit test
 * \author Mathieu BAGUE
 * \date 10/04/2016
 */

#include <SFML/Graphics/Image.hpp>

#include <gtest/gtest.h>

#include <zzbgames/tileset/ImageComparator.hpp>

namespace zzbgames
{

namespace tileset
{

TEST(ImageComparatorTest, areEquals)
{
    sf::Image image1;
    image1.loadFromFile("res/tileset.png");

    sf::Image image2;
    image2.loadFromFile("res/map.png");
    ASSERT_EQ(false, ImageComparator::areEquals(image1, image2));

    sf::IntRect subarea1(0, 0, 32, 32);
    ASSERT_EQ(true, ImageComparator::areEquals(image2, subarea1, image2, subarea1));

    sf::IntRect subarea2(0, 0, 8, 8);
    sf::IntRect subarea3(8, 8, 8, 8);
    ASSERT_EQ(true, ImageComparator::areEquals(image2, subarea2, image2, subarea3));

    sf::IntRect subarea4(0, 0, 8, 8);
    sf::IntRect subarea5(8, 0, 8, 8);
    ASSERT_EQ(false, ImageComparator::areEquals(image2, subarea4, image2, subarea5));

    sf::IntRect subarea6(1, 1, 8, 8);
    sf::IntRect subarea7(8, 0, 8, 8);
    ASSERT_EQ(false, ImageComparator::areEquals(image1, subarea6, image2, subarea7));

    sf::IntRect subarea8(1, 1, 8, 8);
    sf::IntRect subarea9(16, 0, 8, 8);
    ASSERT_EQ(true, ImageComparator::areEquals(image1, subarea8, image2, subarea9));
}

}

}