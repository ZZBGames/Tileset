/**
 * \file Dimension.hpp
 * \author Mathieu BAGUE
 * \date 10/04/2016
 */

#ifndef TILESET_DIMENSION_HPP
#define TILESET_DIMENSION_HPP

#include <SFML/System/Vector2.hpp>

namespace zzbgames
{

namespace tileset
{

/**
 * \brief The Dimension class encapsulates the width and the height of an object.
 */
class Dimension
{
public:
    /**
     * \brief Creates a new Dimension object with a width and a height of zero.
     */
    Dimension();

    /**
     * \brief Creates a new Dimension object with the specified width and height.
     *
     * \param width The specified width.
     * \param height The specified height.
     */
    Dimension(unsigned long width, unsigned long height);

    /**
     * \brief Creates a new Dimension object from a SFML vector.
     *
     * \param dimension The specified dimension as a SFML vector.
     */
    Dimension(const sf::Vector2u& dimension);

    /**
     * \brief Creates a new Dimension object with the width and the height of the specified dimension.
     *
     * \param dimension The Dimension object to copy.
     */
    Dimension(const Dimension& dimension) = default;

    ~Dimension() = default;

    /**
     * \brief Initializes a new Dimension object from another and returns the modified Dimension object.
     *
     * \param dimension The Dimension object to copy.
     *
     * \return The modified Dimension object.
     */
    Dimension& operator=(const Dimension& dimension) = default;

    /**
     * \brief Returns the height of this Dimension.
     *
     * \return The height of this Dimension.
     */
    unsigned long getHeight() const;

    /**
     * \brief Returns the width of this Dimension.
     *
     * \return The width of this Dimension.
     */
    unsigned long getWidth() const;

    /**
     * \brief Sets the height of this Dimension and returns the modified object.
     *
     * \return The modified Dimension object.
     */
    Dimension& setHeight(unsigned long height);

    /**
     * \brief Sets the width of this Dimension and returns the modified object.
     *
     * \return The modified Dimension object.
     */
    Dimension& setWidth(unsigned long width);

protected:
    /// \brief The height dimension.
    unsigned long m_height;

    /// \brief The width dimension.
    unsigned long m_width;
};

}

}

#endif //TILESET_DIMENSION_HPP
