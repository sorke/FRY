//
//  UIView+FRY.h
//  FRY
//
//  Created by Brian King on 10/3/14.
//  Copyright (c) 2014 Raizlabs. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "FRYTouch.h"

@interface UIView (FRY)

/**
 * Check to see if the alpha and hidden values of this view and super views make the view 'visible'
 */
- (BOOL)fry_isVisible;

/**
 *  Return all subviews in reverse order.
 */
- (NSArray *)fry_reverseSubviews;

/**
 *  If the view is a cell in a containerview, this will return the index path for this view.
 *  It works with UITableViewCells and UICollectionViewCells.
 */
- (NSIndexPath *)fry_indexPathInContainer;

/**
 *  A check to determine if this view has a superview of the specified class.
 *
 *  @param klass The parent view class to check
 *
 *  @return YES if there is a parent view of the specified type.
 */
- (BOOL)fry_parentViewOfClass:(Class)cls;

@end
