/**
 * \file Insets.hpp
 * \author Mathieu BAGUE
 * \date 10/04/2016
 */

#ifndef TILESET_INSETS_HPP
#define TILESET_INSETS_HPP

namespace zzbgames
{

namespace tileset
{

/**
 * \brief The Insets class represents the borders of an object (margin, spacing...).
 */
class Insets
{
public:
    /**
     * \brief Creates a new Insets object with all the insets equal to zero.
     */
    Insets();

    /**
     * \brief Creates a new Insets object with the specified top, left, bottom and right insets.
     *
     * \param top The inset from the top.
     * \param left The inset from the left.
     * \param bottom The inset from the bottom.
     * \param right The inset from the right.
     */
    Insets(unsigned long top, unsigned long left, unsigned long bottom, unsigned long right);

    /**
     * \brief Creates and initializes a new Insets object with the insets of the specified insets.
     *
     * \param insets The Insets object to copy.
     */
    Insets(const Insets& insets) = default;

    ~Insets() = default;

    /**
     * \brief Initializes this Insets object from another and returns the modified Insets object.
     *
     * \param insets The Insets object to copy.
     *
     * \return The modified Insets object.
     */
    Insets& operator=(const Insets& insets) = default;

    /**
     * \brief Returns the inset from the bottom.
     *
     * \return The inset from the bottom.
     */
    unsigned long getBottom() const;

    /**
     * \brief Returns the inset from the left.
     *
     * \return The inset from the left.
     */
    unsigned long getLeft() const;

    /**
     * \brief Returns the inset from the right.
     *
     * \return The inset from the right.
     */
    unsigned long getRight() const;

    /**
     * \brief Returns the inset from the top.
     *
     * \return The inset from the top.
     */
    unsigned long getTop() const;

    /**
     * \brief Sets the inset from the bottom and returns the modified object.
     *
     * \param bottom The inset from the bottom.
     *
     * \return The modified Insets object.
     */
    Insets& setBottom(unsigned long bottom);

    /**
     * \brief Sets the inset from the left and returns the modified object.
     *
     * \param left The inset from the left.
     *
     * \return The modified Insets object.
     */
    Insets& setLeft(unsigned long left);

    /**
     * \brief Sets the inset from the right and returns the modified object.
     *
     * \param right The inset from the right.
     *
     * \return The modified Insets object.
     */
    Insets& setRight(unsigned long right);

    /**
     * \brief Sets the inset from the top and returns the modified object.
     *
     * \param top The inset from the top.
     *
     * \return The modified Insets object.
     */
    Insets& setTop(unsigned long top);

protected:
    /// \brief The inset from the bottom.
    unsigned long m_bottom;

    /// \brief The inset from the left.
    unsigned long m_left;

    /// \brief The inset from the right.
    unsigned long m_right;

    /// \brief The inset from the top.
    unsigned long m_top;
};

}

}

#endif //TILESET_INSETS_HPP
