/**
 * \file TileMapper.hpp
 * \author Mathieu BAGUE
 * \date 23/04/2016
 */

#ifndef TILESET_TILEMAPPER_HPP
#define TILESET_TILEMAPPER_HPP

#include <vector>

#include <SFML/Graphics/Image.hpp>

#include <zzbgames/tileset/Tileset.hpp>

namespace zzbgames
{

namespace tileset
{

/**
 * \brief The TileMapper class is a utility class to convert image to a list of tile index
 */
class TileMapper
{
public:
    /**
     * \brief Creates a new TileMapper object.
     *
     * \param tileset The tileset used to split images into tiles
     */
    TileMapper(const Tileset& tileset);

    /**
     * \brief Creates a new TileMapper object from an existing TileMapper object.
     *
     * \param tileMapper The existing TileMapper.
     */
    TileMapper(const TileMapper& tileMapper) = default;

    ~TileMapper() = default;

    /**
     * \brief Initializes this TileMapper object from an existing TileMapper object.
     */
    TileMapper& operator=(const TileMapper& tileMapper) = default;

    /**
     * \brief Returns the list of tile indexes in the tileset required to draw the specified image.
     *
     * \param image The image to process.
     *
     * \return A list of tile indexes.
     */
    std::vector<unsigned long> getTileIndexes(const sf::Image& image) const;

protected:
    /// \brief The tileset used to map the image
    const Tileset& m_tileset;
};

}

}

#endif //TILESET_TILEMAPPER_HPP
