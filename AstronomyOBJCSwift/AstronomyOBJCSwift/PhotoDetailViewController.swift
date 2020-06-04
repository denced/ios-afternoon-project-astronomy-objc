//
//  PhotoDetailViewController.swift
//  AstronomyOBJCSwift
//
//  Created by denis cedeno on 6/4/20.
//  Copyright © 2020 DenCedeno Co. All rights reserved.
//

import UIKit

class PhotoDetailViewController: UIViewController {

 
    @IBOutlet weak var imageView: UIImageView!
    @IBOutlet weak var detailLabel: UILabel!
    @IBOutlet weak var cameraLabel: UILabel!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        updateViews()
    }
    lazy var dateFormatter: DateFormatter = {
        let df = DateFormatter()
        df.dateStyle = .short
        df.timeStyle = .short
        return df
    }()
    
    var photo: MarsPhotoReference? {
        didSet {
            updateViews()
        }
    }
    
    private func updateViews() {
        guard let photo = photo, isViewLoaded else { return }
        do {
            let data = try Data(contentsOf: photo.imageURL.usingHTTPS!)
            imageView.image = UIImage(data: data)?.filtered()
            let dateString = dateFormatter.string(from: photo.earthDate)
            detailLabel.text = "Taken by \(photo.camera.roverId) on \(dateString) (Sol \(photo.sol))"
            cameraLabel.text = photo.camera.fullName
        } catch {
            NSLog("Error setting up views on detail view controller: \(error)")
        }
    }

}
