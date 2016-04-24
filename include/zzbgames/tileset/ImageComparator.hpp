/**
 * \file ImageComparator.hpp
 * \author Mathieu BAGUE
 * \date 23/04/2016
 */

#ifndef TILESET_IMAGECOMPARATOR_HPP
#define TILESET_IMAGECOMPARATOR_HPP

#include <SFML/Graphics/Image.hpp>
#include <SFML/Graphics/Rect.hpp>

namespace zzbgames
{

namespace tileset
{

/**
 * \brief The ImageComparator class is an utility class to compare content of two SFML images.
 */
class ImageComparator
{
public:
    /**
     * \brief Returns true if the two specified images are equals and false otherwise.
     *
     * \param image1 The first image.
     * \param image2 The second image.
     *
     * \return Returns true if the two specified images are equals and false otherwise.
     */
    static bool areEquals(const sf::Image& image1, const sf::Image& image2);

    /**
     * \brief Returns true if the two sub areas of the specified images are equals and false otherwise.
     *
     * \param image1 The first image.
     * \param subarea1 The sub area of the first image to compare.
     * \param image2 The second image.
     * \param subarea2 The sub area of the second image to compare.
     *
     * \return Returns true if the two sub areas of the specified images are equals and false otherwise.
     */
    static bool areEquals(const sf::Image& image1, const sf::IntRect& subarea1, const sf::Image& image2,
                          const sf::IntRect& subarea2);
};

}

}

#endif //TILESET_IMAGECOMPARATOR_HPP
