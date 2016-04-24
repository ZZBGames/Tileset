/**
 * \file Tileset.hpp
 * \author Mathieu BAGUE
 * \date 23/04/2016
 */

#ifndef TILESET_TILESET_HPP
#define TILESET_TILESET_HPP

#include <memory>
#include <string>

#include <SFML/Graphics/Rect.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>

#include <zzbgames/tileset/Dimension.hpp>
#include <zzbgames/tileset/Insets.hpp>

namespace zzbgames
{

namespace tileset
{

/**
 * \brief The Tileset class represents an image split in a tile grid.
 */
class Tileset
{
public:
    /**
     * \brief Creates a new Tileset object from a file.
     *
     * \param filename The name of the tileset image file.
     * \param tileSize The size of each tile in pixels.
     * \param margin The inner margin of this tileset.
     * \param spacing The spacing between each tile in pixels.
     */
    Tileset(const std::string& filename, const Dimension& tileSize, const Insets& margin, const Insets& spacing);

    /**
     * \brief Creates a new Tileset object from an existing SFML image.
     *
     * \param image The SFML image used by this tileset.
     * \param tileSize The size of each tile in pixels.
     * \param margin The inner margin of this tileset.
     * \param spacing The spacing between each tile in pixels.
     */
    Tileset(const sf::Image& image, const Dimension& tileSize, const Insets& margin, const Insets& spacing);

    /**
     * \brief Creates a new Tileset object from an existing Tileset.
     *
     * \param tileset The existing tileset.
     */
    Tileset(const Tileset& tileset) = default;

    ~Tileset() = default;

    /**
     * \brief Initializes this Tileset object from an existing Tileset.
     *
     * \param tileset The existing tileset.
     */
    Tileset& operator=(const Tileset& tileset) = default;

    /**
     * \brief Returns the number of columns of this tileset.
     *
     * \return The number of columns of this tileset.
     */
    unsigned long getColumnCount() const;

    /**
     * \brief Returns the inner margin of this tileset.
     *
     * \return The inner margin of this tileset.
     */
    const Insets& getMargin() const;

    /**
     * \brief Returns the number of rows of this tileset.
     *
     * \return The number of rows of this tileset.
     */
    unsigned long getRowCount() const;

    /**
     * \brief Returns the spacing between each tile.
     *
     * \return The spacing between each tile.
     */
    const Insets& getSpacing() const;

    /**
     * \brief Creates a new SFML image object for the specified tile.
     *
     * \param tileIndex The tile index in this tileset.
     *
     * \return A new SFML image object.
     */
    std::unique_ptr<sf::Image> getTileAsImage(unsigned long tileIndex) const;


    /**
     * \brief Returns the sub rectangle of the texture image for the specified tile.
     *
     * \param tileIndex The tile index in this tileset.
     *
     * \return The sub rectangle of the texture for the specified tile.
     */
    sf::IntRect getTileAsRect(unsigned long tileIndex) const;

    /**
     * \brief Creates a new SFML sprite object for the specified tile.
     *
     * \param tileIndex The tile index in this tileset.
     *
     * \return A new SFML sprite object.
     */
    std::unique_ptr<sf::Sprite> getTileAsSprite(unsigned long tileIndex) const;

    /**
     * \brief Returns the number of tiles of this tileset.
     *
     * \return The number of tiles of this tileset.
     */
    unsigned long getTileCount() const;

    /**
     * \brief Returns the size of each tile.
     *
     * \return The size of each tile in this tileset.
     */
    const Dimension& getTileSize() const;

protected:
    /// \brief The SFML image.
    sf::Image m_image;

    /// \brief The SFML texture.
    sf::Texture m_texture;

    /// \brief The size of each tile in pixels.
    Dimension m_tileSize;

    /// \brief The inner margin of this tileset in pixels.
    Insets m_margin;

    /// \brief The spacing between each tile in pixels.
    Insets m_spacing;

private:
    void computeGridSize();

private:
    /// \brief The size of this tileset in squares.
    Dimension m_gridSize;
};

}

}

#endif //TILESET_TILESET_HPP
