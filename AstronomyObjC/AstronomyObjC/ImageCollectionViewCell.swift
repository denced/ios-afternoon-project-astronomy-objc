//
//  ImageCollectionViewCell.swift
//  AstronomyObjC
//
//  Created by denis cedeno on 6/4/20.
//  Copyright © 2020 DenCedeno Co. All rights reserved.
//

import UIKit

class ImageCollectionViewCell: UICollectionViewCell {
        
        override func prepareForReuse() {
            super.prepareForReuse()
            imageView.image = #imageLiteral(resourceName: "MarsPlaceholder")
        }
        
        // MARK: Properties
        
        // MARK: IBOutlets
        
        @IBOutlet var imageView: UIImageView!
    
}
